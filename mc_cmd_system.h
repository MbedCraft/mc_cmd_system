/* Console example — various system commands

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Register all system functions
void mc_cmd_system_register(void);

// Register common system functions: "version", "restart", "free", "heap", "tasks"
void mc_cmd_system_common_register(void);

// Register deep and light sleep functions
void mc_cmd_system_sleep_register(void);

#ifdef __cplusplus
}
#endif
