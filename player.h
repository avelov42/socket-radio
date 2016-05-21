#ifndef SIK_RADIO_PLAYER_H
#define SIK_RADIO_PLAYER_H

#include <string>

const int INVALID_ARGUMENT_EXIT_CODE = 1;
const bool DEBUG = true;

struct Arguments
{
    std::string server_name, path_name, r_port, outfile_name, m_port, md_string;
};


#endif //SIK_RADIO_PLAYER_H
