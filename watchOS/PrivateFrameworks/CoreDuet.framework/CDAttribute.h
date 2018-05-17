//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDSession, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CDAttribute : NSObject
{
    CDSession *_session;
    NSString *_name;
    NSString *_fullName;
    int _type;
    unsigned long long _integerId;
    NSMutableArray *resourceCallbackList;
    NSMutableArray *revocationCallbackList;
    NSObject<OS_dispatch_queue> *resourceCallbackQueue;
    int resourceCallToken;
    int focalAppToken;
    int conditionChangeToken;
    int systemConditionChangeToken;
    int localFocalInfoToken;
    int revocationToken;
    unsigned short _admissionMask;
    NSMutableDictionary *costCache;
    _Bool delayedUpdatePending;
    NSMutableDictionary *tokenCache;
    NSMutableDictionary *dateCache;
    NSMutableArray *activeReports;
    NSObject<OS_dispatch_queue> *_deferredRequestsQ;
    NSObject<OS_dispatch_queue> *admissionCacheQueue;
    NSMutableDictionary *admissionCache;
    CDSession *_sessionStrong;
    CDSession *_sessionWeak;
}

@property(readonly) unsigned long long integerId; // @synthesize integerId=_integerId;
@property(readonly) NSObject<OS_dispatch_queue> *deferredRequestsQ; // @synthesize deferredRequestsQ=_deferredRequestsQ;
@property(readonly) __weak CDSession *sessionWeak; // @synthesize sessionWeak=_sessionWeak;
@property(readonly) CDSession *sessionStrong; // @synthesize sessionStrong=_sessionStrong;
@property(readonly) int type; // @synthesize type=_type;
@property(readonly) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)requestStatisticFromDevice:(id)arg1 statistic:(int)arg2 forHistoryWindow:(id)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;
- (_Bool)requestPeerForecastFromDevice:(id)arg1 withValue:(id)arg2 forHistoryWindow:(id)arg3 forecastType:(int)arg4 error:(id *)arg5 handler:(CDUnknownBlockType)arg6;
- (_Bool)requestTemporalForecastFromDevice:(id)arg1 withValue:(id)arg2 forHistoryWindow:(id)arg3 forecastType:(int)arg4 error:(id *)arg5 handler:(CDUnknownBlockType)arg6;
- (_Bool)resetAdmissionBitMask:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setAdmissionBitMask:(unsigned long long)arg1 error:(id *)arg2;
- (id)repeatedStatistic:(int)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 error:(id *)arg4;
- (id)statistic:(int)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 error:(id *)arg4;
- (id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 forecastType:(int)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id *)arg7;
- (id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 forecastType:(int)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id *)arg7;
- (_Bool)reset:(int)arg1 error:(id *)arg2;
- (id)historyOfValue:(id)arg1 forWindow:(id)arg2 filter:(int)arg3 maximumElements:(unsigned long long)arg4 error:(id *)arg5;
- (id)repeatedStatistic:(int)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 error:(id *)arg4;
- (id)statistic:(int)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 error:(id *)arg4;
- (id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 forecastType:(int)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id *)arg7;
- (id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 forecastType:(int)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id *)arg7;
- (_Bool)meteringUpdateWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 meteringToken:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)meteringStoppedWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 meteringToken:(unsigned long long)arg4 error:(id *)arg5;
- (unsigned long long)meteringStartedWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 error:(id *)arg4;
- (unsigned int)meteringIsActive:(id)arg1;
- (void)meteringInsertCachedToken:(id)arg1 meteringToken:(unsigned long long)arg2;
- (id)meteringLookupCachedToken:(id)arg1;
- (void)reportAccumulatedCost;
- (_Bool)accumulateCostDictionary:(id)arg1 meteringToken:(unsigned long long)arg2 date:(id)arg3;
- (id)fullNameFromString:(id)arg1 clientId:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setResourceAvailabilityBlockWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)setAdmissionRevocationBlockWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)setResourceDispatch:(id *)arg1;
- (_Bool)setRevocationDispatch;
- (void)callListOfCallbacks:(id)arg1 oneshotCall:(_Bool)arg2 callList:(id)arg3;
- (_Bool)setTrendBlockForValue:(id)arg1 withConfig:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
- (void)admissionCheckOfValueAsync:(id)arg1 type:(int)arg2 options:(id)arg3 handleQueue:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (_Bool)admissionCheckOfValue:(id)arg1 type:(int)arg2 options:(id)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;
- (void)addAdmissionValidity:(id)arg1 validity:(long long)arg2;
- (long long)isAdmissionValid:(id)arg1;
- (_Bool)admissionCheckOfValue:(id)arg1 andOccurredWithValue:(id)arg2 cost:(long long)arg3 type:(int)arg4 options:(id)arg5 error:(id *)arg6 handler:(CDUnknownBlockType)arg7;
- (_Bool)admissionCheckOfValue:(id)arg1 andStartedWithValue:(id)arg2 cost:(long long)arg3 type:(int)arg4 options:(id)arg5 error:(id *)arg6 handler:(CDUnknownBlockType)arg7;
- (id)statistic:(int)arg1 forHistoryWindow:(id)arg2 error:(id *)arg3;
- (void)stuffDictionary:(id *)arg1 forStatisticType:(int)arg2 matchingStatisticType:(int)arg3 xpcKey:(const char *)arg4 incomingXpcObject:(id)arg5;
- (id)repeatedStatistic:(int)arg1 forHistoryWindow:(id)arg2 error:(id *)arg3;
- (id)repeatedStatisticXPCObjectToArray:(id)arg1 error:(id *)arg2;
- (id)distinctValuesForHistoryWindow:(id)arg1 error:(id *)arg2;
- (id)histogramForHistoryWindow:(id)arg1 error:(id *)arg2;
- (id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 forecastType:(int)arg3 maximumElements:(unsigned long long)arg4 error:(id *)arg5;
- (id)peerForecastXPCObjectToDictionary:(id)arg1 attributeValue:(id)arg2 error:(id *)arg3;
- (id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 forecastType:(int)arg3 maximumElements:(unsigned long long)arg4 error:(id *)arg5;
- (id)temporalForecastXPCObjectToArray:(id)arg1 attributeValue:(id)arg2 forecastType:(int)arg3 error:(id *)arg4;
- (double)correlationOfValue:(id)arg1 toAttribute:(id)arg2 withValue:(id)arg3 temporalLeeway:(double)arg4 error:(id *)arg5;
- (_Bool)occurredWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id *)arg4;
- (_Bool)occurredWithValue:(id)arg1 cost:(long long)arg2 error:(id *)arg3;
- (_Bool)activityWithValue:(id)arg1 cost:(long long)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
- (_Bool)activityStoppedWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id *)arg4;
- (_Bool)activityStoppedWithValue:(id)arg1 cost:(long long)arg2 error:(id *)arg3;
- (_Bool)activityStartedWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id *)arg4;
- (_Bool)activityStartedWithValue:(id)arg1 cost:(long long)arg2 error:(id *)arg3;
- (_Bool)backgroundLaunchStoppedWithValue:(id)arg1 error:(id *)arg2;
- (_Bool)backgroundLaunchStartedWithValue:(id)arg1 error:(id *)arg2;
- (_Bool)destroyWithError:(id *)arg1;
- (_Bool)associateToBudget:(id)arg1 error:(id *)arg2;
- (_Bool)setCategory:(int)arg1 error:(id *)arg2;
- (_Bool)occurredWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 risingEdge:(_Bool)arg4 fallingEdge:(_Bool)arg5 deferredRequest:(_Bool)arg6 error:(id *)arg7;
- (_Bool)occurredWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 risingEdge:(_Bool)arg4 fallingEdge:(_Bool)arg5 error:(id *)arg6;
- (_Bool)attributeIsClientWriteable;
- (_Bool)isBypassClientForValue:(id)arg1;
- (id)description;
- (id)session;
- (id)initWithMySession:(id)arg1 name:(id)arg2 type:(int)arg3 integerId:(unsigned long long)arg4 error:(id *)arg5;
- (id)initWithSession:(id)arg1 name:(id)arg2 type:(int)arg3 integerId:(unsigned long long)arg4 error:(id *)arg5;
- (id)_initWithSession:(id)arg1 name:(id)arg2 type:(int)arg3 integerId:(unsigned long long)arg4 weak:(_Bool)arg5 error:(id *)arg6;

@end
