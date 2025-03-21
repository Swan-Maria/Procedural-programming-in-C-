#include <iostream>

const int SECONDS_PER_DAY = 3600*24;
const int SECONDS_PER_HOUR = 3600;
const int SECONDS_PER_MINUTE = 60;

char getCharFromDigit(int digit) {
    switch (digit) {
    case 0: 
        return '0';
    case 1: 
        return '1';
    case 2: 
        return '2';
    case 3: 
        return '3';
    case 4: 
        return '4';
    case 5: 
        return '5';
    case 6: 
        return '6';
    case 7: 
        return '7';
    case 8: 
        return '8';
    case 9: 
        return '9';
    default: 
        return ' ';
    }
}

int main()
{
    int N;
    std::cout << "input seconds number: ";
    std::cin >> N;

    if (N < 0)
    {
        std::cout << "the number of seconds must be a natural number\n";
        return 1;
    }

    int hours = (N / SECONDS_PER_HOUR)%24;
    int rest = N % SECONDS_PER_HOUR;
    int minutes = rest / SECONDS_PER_MINUTE;
    int seconds = rest % SECONDS_PER_MINUTE;
    
    char result[9];

    int firstDigitHours = getCharFromDigit(hours / 10);
    int secondDigitHours = getCharFromDigit(hours % 10);
    int last_result;

    if (firstDigitHours != 0)
    {
        result[0] = firstDigitHours;
        result[1] = secondDigitHours;
        result[2] = ':';
        last_result = 2;
    }
    else
    {
        result[0] = secondDigitHours;
        result[1] = ':';
        last_result = 1;
    }
   
    int firstDigitMinutes = getCharFromDigit(minutes / 10);
    int secondDigitMinutes = getCharFromDigit(minutes % 10);
   
    if (firstDigitMinutes != 0)
    {
        result[last_result + 1] = firstDigitMinutes;
        result[last_result + 2] = secondDigitMinutes;
        result[last_result + 3] = ':';
    }
    else
    {
        result[last_result + 1] = '0';
        result[last_result + 2] = secondDigitMinutes;
        result[last_result + 3] = ':';
    }
    last_result += 3;

    int firstDigitSeconds = getCharFromDigit(seconds / 10);
    int secondDigitSeconds = getCharFromDigit(seconds % 10);
    if (firstDigitSeconds != 0)
    {
        result[last_result + 1] = firstDigitSeconds;
        result[last_result + 2] = secondDigitSeconds;
        result[last_result + 3] = '\0';
    }
    else
    {
        result[last_result + 1] = '0';
        result[last_result + 2] = secondDigitMinutes;
        result[last_result + 3] = '\0';
    }

    if (N / SECONDS_PER_HOUR > 24)
    {
        int days = N / SECONDS_PER_DAY;
        std::cout <<N << " seconds is "<<days << " days "<<result;
    }
    else
    {
        std::cout << N << " seconds is " << result;
    }

    return 0;
}