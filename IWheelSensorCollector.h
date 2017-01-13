#ifndef IWHEELSENSORCOLLECTOR_H_HEADER_INCLUDED_A83C1006
#define IWHEELSENSORCOLLECTOR_H_HEADER_INCLUDED_A83C1006
#include "IBase.h"
#include "IDev.h"
#include "TWSData.h"

// ���ִ��������ݲɼ������ӿ�IWheelSensor��
//##ModelId=5704A4EB0253
class IWheelSensorCollector : public IBase, public IDev
{
  public:
    // ��ȡ�Ÿ�����(����ǰ�г���)
    //##ModelId=5705F49F0044
    int getSensorSequence(int sensorOrder, List<TWSData> &result);

    // ���ôŸ��źŻص�������
    //##ModelId=5705F4DC02B2
    bool setSignalCallback(
        // �ܹ��ص����ӵ����ݶ��󣬿��ɵ��÷��Զ��塣
        void *data, 
        // ָ����Ҫ�ص���Ӧ�ĴŸ����(���)
        int sensorOrder, 
        // �ص�����
        WHEEL_SENSOR_CALLBACK callback);

    // ��ȡ��һ���Ÿֵ�ʱ�䡣��ȷ��0.1����
    //##ModelId=570B0D7301EC
    UINT64 getFirstTimestamp(int sensorOrder);

    // ��ȡ���һ���Ÿֵ�ʱ�䡣��ȷ��0.1����
    //##ModelId=570B0D7F02D9
    UINT64 getLastTimestamp(int sensorOrder);

    // ���ýӳ�״̬�Ļص���
    //##ModelId=570B0DCB00CC
    bool setStatusCallback(void *data, TRAIN_STATUS_CALLBACK callback);

    // ��ȡ�ӳ�״̬��
    //##ModelId=570B0DD1027B
    TRAIN_STATUS getStatus();

    // ��ȡ��ID��
    //##ModelId=5750E0D402AC
    UINT32 getCurrentTrainID();

};



#endif /* IWHEELSENSORCOLLECTOR_H_HEADER_INCLUDED_A83C1006 */
