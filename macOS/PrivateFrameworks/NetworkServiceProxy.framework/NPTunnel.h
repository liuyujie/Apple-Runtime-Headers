//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSObject<OS_dispatch_data>, NSObject<OS_nw_endpoint>, NSObject<OS_nw_interface>, NSObject<OS_nw_parameters>, NSObject<OS_nw_path>, NSPAppRule, NSUUID, NetworkServiceProxyConnectionStats;

@interface NPTunnel : NSObject
{
    struct nw_protocol _protocol;
    BOOL _persistMetrics;
    BOOL _isTFOProbeSucceeded;
    BOOL _isCancelled;
    BOOL _isReadyForData;
    BOOL _eof;
    BOOL _handledDisconnected;
    int _error;
    NSUUID *_identifier;
    NSObject<OS_nw_parameters> *_parameters;
    NSObject<OS_nw_endpoint> *_endpoint;
    NSObject<OS_nw_endpoint> *_localEndpoint;
    NSObject<OS_nw_path> *_path;
    id <NPTunnelDelegate> _delegate;
    NSMutableDictionary *_flows;
    NSPAppRule *_appRule;
    NSDate *_connectionStartDate;
    NetworkServiceProxyConnectionStats *_stats;
    double _timeIntervalSinceLastUsage;
    double _timeToFirstRequest;
    double _timeToFirstByte;
    long long _connectionState;
    long long _fallbackReason;
    unsigned long long *_timestamps;
    NSObject<OS_dispatch_data> *_savedData;
    void *_idleTimer;
}

+ (void)initializeProtocol;
@property BOOL handledDisconnected; // @synthesize handledDisconnected=_handledDisconnected;
@property void *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(retain) NSObject<OS_dispatch_data> *savedData; // @synthesize savedData=_savedData;
@property BOOL eof; // @synthesize eof=_eof;
@property BOOL isReadyForData; // @synthesize isReadyForData=_isReadyForData;
@property BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly) BOOL isTFOProbeSucceeded; // @synthesize isTFOProbeSucceeded=_isTFOProbeSucceeded;
@property(readonly) unsigned long long *timestamps; // @synthesize timestamps=_timestamps;
@property long long fallbackReason; // @synthesize fallbackReason=_fallbackReason;
@property int error; // @synthesize error=_error;
@property long long connectionState; // @synthesize connectionState=_connectionState;
@property double timeToFirstByte; // @synthesize timeToFirstByte=_timeToFirstByte;
@property double timeToFirstRequest; // @synthesize timeToFirstRequest=_timeToFirstRequest;
@property(readonly) double timeIntervalSinceLastUsage; // @synthesize timeIntervalSinceLastUsage=_timeIntervalSinceLastUsage;
@property(retain) NetworkServiceProxyConnectionStats *stats; // @synthesize stats=_stats;
@property BOOL persistMetrics; // @synthesize persistMetrics=_persistMetrics;
@property(retain) NSDate *connectionStartDate; // @synthesize connectionStartDate=_connectionStartDate;
@property(readonly) NSPAppRule *appRule; // @synthesize appRule=_appRule;
@property(readonly) NSMutableDictionary *flows; // @synthesize flows=_flows;
@property(readonly) __weak id <NPTunnelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSObject<OS_nw_path> *path; // @synthesize path=_path;
@property(retain) NSObject<OS_nw_endpoint> *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
@property(readonly) NSObject<OS_nw_endpoint> *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly) NSObject<OS_nw_parameters> *parameters; // @synthesize parameters=_parameters;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly) NSObject<OS_nw_interface> *outputInterface;
- (void)teardownOutputHandler;
- (void)destroyConnection;
- (void)cancelConnection;
- (void)handleEOF;
- (void)handleReadData:(struct nw_frame_array_s *)arg1;
- (void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2;
- (void)handleInputAvailable;
- (void)handleDataWrittenWithError:(int)arg1;
- (void)write:(id)arg1;
- (void)handleOutputAvailable;
- (void)writeInitialData;
- (void)handleConnectionIsDisconnected;
- (BOOL)flowIsFirstFlow:(id)arg1;
- (void)handleFlowUsedTunnel;
- (BOOL)start;
@property(readonly) BOOL isConnectionAlive;
- (unsigned long long)maxDataSendSizeForFlow:(id)arg1;
- (id)createConnectionInfo;
@property(readonly) unsigned long long initialWindowSize;
@property(readonly) BOOL canHandleMoreData;
- (void)handleFallbackForFlow:(id)arg1;
- (void)handleCanHandleMoreData;
- (void)handleDisconnected;
- (void)handleConnected;
- (void)acknowledgeData:(unsigned long long)arg1 sentToFlow:(id)arg2;
- (void)sendData:(id)arg1 toClientFlow:(unsigned long long)arg2;
- (void)increaseWindowSizeForFlow:(unsigned long long)arg1 byBytes:(unsigned long long)arg2;
- (long long)sendData:(id)arg1 forFlow:(id)arg2;
- (void)closeFlow:(id)arg1;
- (id)handleFlowClosed:(unsigned long long)arg1 withFallbackReason:(long long)arg2;
- (BOOL)hasFlow:(unsigned long long)arg1;
- (void)removeFlow:(unsigned long long)arg1;
- (void)startIdleTimer;
- (unsigned long long)allocateFlowID;
- (BOOL)addNewFlow:(id)arg1;
@property(readonly) struct nw_protocol *protocol;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 appRule:(id)arg3 flowProperties:(id)arg4 delegate:(id)arg5;

@end

