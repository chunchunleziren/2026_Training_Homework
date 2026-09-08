/* 作业 01：将目标速度限制在 [-1000, 1000]，补全下面的函数。 */
int clamp_speed(int target_speed)
{
    /* TODO: 超出范围时返回对应边界，否则返回原值。 */
    if(target_speed > 1000){
        return 1000;
    }else if(target_speed < -1000){
        return -1000;
    }else{
         return target_speed;
    }
}
