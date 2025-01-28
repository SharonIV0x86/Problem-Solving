#include <iostream>
#include <algorithm> // for std::max

int main()
{
    int nt;
    std::cin >> nt;

    for (int t = 0; t < nt; ++t)
    {
        int x, y;
        std::cin >> x >> y;

        // Calculate minimum screens needed for 2x2 icons
        int mm = (y + 1) / 2;

        // Adjust x after placing y 2x2 icons on mm screens
        x -= (mm * 5 * 3 - y * 2 * 2);
        x = std::max(x, 0);

        // Calculate additional screens needed for remaining 1x1 icons
        mm += (x + 5 * 3 - 1) / (5 * 3);

        // Output the result
        std::cout << mm << std::endl;
    }

    return 0;
}

/// FAILED APPROACH!!
// #include <iostream>

// int main()
// {
//     int t;
//     std::cin >> t;
//     while (t--)
//     {
//         int x, y;
//         std::cin >> x >> y;
//         int screen2x2 = y / 2 + (y % 2);
//         int screensReq = screen2x2;
//         if (x > screen2x2 * 7)
//         {
//             int totalPixels = x;
//             int pixels1x1 = totalPixels - (screen2x2 * 7);
//             if (y != 0)
//             {
//                 screensReq += pixels1x1 / 7;if (pixels1x1 % 7 != 0)
//             {
//                 screensReq += 1;
//             }
//             }else{
//                 screensReq += pixels1x1 / 15;
//                 if(pixels1x1 % 15 != 0)
//                     screensReq += 1;
//             }

//         }

//         std::cout << screensReq << std::endl;
//     }
// }