void AlarmListen(alarmSet); /* Blocking when no alarm happened */

void AlarmClear(alarmSet, alarm);

void AlarmHandle(alarm, policy);

void AlarmStatus(alarm, &status);

void AlarmReceive(alarmSet, &alarm);

void AlarmGetPolicy(alarm, &policy);

void AlarmAddSet(alarm, alarmSet);
