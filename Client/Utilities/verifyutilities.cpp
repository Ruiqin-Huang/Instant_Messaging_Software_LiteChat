#include "verifyutilities.h"
#include <regex>

VerifyUtilities::VerifyUtilities()
{

}
//暂时没有写正则表达式验证是否有效的语句

bool VerifyUtilities::IsValidUsername(QString username) {
    // 不能含有标点符号、或者是纯数字，或者长度小于四位
    std::regex rx_("[A-Za-z]"); // 判断是否含有字母
    std::regex rx("^[A-Za-Z0-9]*$"); // 判断是否有其他符号
    if (!std::regex_search(username.toStdString(), rx_) ||
        !std::regex_search(username.toStdString(), rx) ||
        username.length() < 4) {
        return false;
    }
    return true;
}

bool VerifyUtilities::IsValidPassword(QString password) {
    // 长度要够，不能含有1234，必须含有大小写字母
    if (password.length() < 6) {
        return false; // 长度至少为6位
    }
    std::regex rx("(1234)");
    if (std::regex_search(password.toStdString(), rx)) {
        return false; // 含有1234
    }
    std::regex rx1("[A-Z]");
    std::regex rx2("[a-z]");
    if (!std::regex_search(password.toStdString(), rx1) ||
        !std::regex_search(password.toStdString(), rx2)) {
        return false; // 含有大小写字母
    }
    return true;
}

