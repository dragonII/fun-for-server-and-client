#ifndef REQUESTSENDERI_H
#define REQUESTSENDERI_H


class RequestSenderI : RequestSender
{
	public:
		virtual void getACKBack(const Ice::Current&);

		virtual void getDataBack(const SRS::DataGet&, const Ice::Current&);
		virtual void getPlayBack(const SRS::DataGet&, const Ice::Current&);
		virtual void getStopBack(const SRS::DataGet&, const Ice::Current&);
		virtual void getControlBack(const SRS::DataGet&, const Ice::Current&);
		virtual void getStreamBack(const SRS::DataGet&, const Ice::Current&);
		virtual void getDVRParamBack(const SRS::DataGet&, const Ice::Current&);
		virtual void getHWStatusBack(const SRS::DataGet&, const Ice::Current&);
		virtual void getRestartBack(const SRS::DataGet&, const Ice::Current&);
		virtual void getTimeSyncBack(const SRS::DataGet&, const Ice::Current&);
		virtual void getServiceStatusBack(const SRS::DataGet&, const Ice::Current&);
		virtual void getEquipStatusBack(const SRS::DataGet&, const Ice::Current&);
		virtual void getLogSyncBack(const SRS::DataGet&, const Ice::Current&);
		virtual void getHeartbeatBack(const SRS::DataGet&, const Ice::Current&);
};



#endif
