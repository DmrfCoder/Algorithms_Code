//
// Created by dmrf on 18-5-5.
//

void eight_Queens() {
    int c[9];
    for (int i = 1; i <= 8; ++i) {
        c[i] = 0;
    }

    bool flag = false;
    int k = 1;
    while (k >= 1) {
        while (c[k] <= 7) {
            c[k]++;
            if (c[k]为合法着色){
                if (k == 8) {
                    flag = true;
                    break;
                } else {
                    k++;
                }
            }
        }
        if (flag) {
            break;
        }
        c[k] = 0;
        k--;
    }

    if (flag) {
        cout << "success" << endl;
    } else {
        cout << "no solution" << endl;
    }
}