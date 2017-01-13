#ifndef IWHEELSENSORCOLLECTOR_H_HEADER_INCLUDED_A83C1006
#define IWHEELSENSORCOLLECTOR_H_HEADER_INCLUDED_A83C1006
#include "IBase.h"
#include "IDev.h"
#include "TWSData.h"

// 车轮传感器数据采集基础接口IWheelSensor。
//##ModelId=5704A4EB0253
class IWheelSensorCollector : public IBase, public IDev
{
  public:
    // 获取磁钢序列(仅当前列车的)
    //##ModelId=5705F49F0044
    int getSensorSequence(int sensorOrder, List<TWSData> &result);

    // 设置磁钢信号回调函数。
    //##ModelId=5705F4DC02B2
    bool setSignalCallback(
        // 能过回调传加的数据对象，可由调用方自定义。
        void *data, 
        // 指定需要回调响应的磁钢序号(类别)
        int sensorOrder, 
        // 回调函数
        WHEEL_SENSOR_CALLBACK callback);

    // 获取第一个磁钢的时间。精确到0.1毫秒
    //##ModelId=570B0D7301EC
    UINT64 getFirstTimestamp(int sensorOrder);

    // 获取最后一个磁钢的时间。精确到0.1毫秒
    //##ModelId=570B0D7F02D9
    UINT64 getLastTimestamp(int sensorOrder);

    // 设置接车状态的回调。
    //##ModelId=570B0DCB00CC
    bool setStatusCallback(void *data, TRAIN_STATUS_CALLBACK callback);

    // 获取接车状态。
    //##ModelId=570B0DD1027B
    TRAIN_STATUS getStatus();

    // 获取列ID。
    //##ModelId=5750E0D402AC
    UINT32 getCurrentTrainID();

};



#endif /* IWHEELSENSORCOLLECTOR_H_HEADER_INCLUDED_A83C1006 */
