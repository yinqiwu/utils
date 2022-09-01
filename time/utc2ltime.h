/**
 * @file utils.h
 * @author bruce.yin (crazybruce.yin@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-10
 * 
 * @copyright Copyright (c) 2020
 * 
 * @par ChangeLog:
 * <table>
 * <tr><th>Date       <th>Version <th>Author  <th>Description
 * <tr><td>2020-12-10 <td>1.0     <td>bruce.yin     <td>Modfiy context
 * </table>
 * @verbatim
 * ==============================================================================
 *                      ##### How to use  #####                       
 * ==============================================================================
 * @endverbatim
 * @attention
 */
#ifndef __UTC2LTIME_H__
#define __UTC2LTIME_H__

#ifndef DEBUG
#define LOG printf
#else
#define LOG 
#endif

/**
 * @brief Localtime time after conversion
 * 
 * 
 * 
 */
typedef struct _local_time {
    unsigned short year;
    unsigned char month;
    unsigned char day;
    unsigned char hour;
    unsigned char min;
    unsigned char sec;
} local_time;

/**
 * @brief 
 * 
 * @param ts in Current unix timestamp
 * @param time_zone in Select the time zone, the range is between -12 and +12, such as Beijing time, now select 8 
 * @return local_time If there is an error, all data in the return value is 0, and the other returns normal data
 */
local_time utc_to_localtime(long ts, int time_zone);





#endif