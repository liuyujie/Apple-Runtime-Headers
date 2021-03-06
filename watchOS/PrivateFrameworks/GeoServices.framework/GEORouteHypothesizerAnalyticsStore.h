//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface GEORouteHypothesizerAnalyticsStore : NSObject <NSSecureCoding>
{
    double _observedEarlyDeltaFromRequiredTimeToLeave;
    double _observedLateDeltaFromRequiredTimeToLeave;
    unsigned int _hypothesizerRerouteCount;
    unsigned int _etaUpdatesAfterEventStart;
    _Bool _etaUpdatesWereReported;
    unsigned int _hypothesisCount;
    _Bool _stopped;
    unsigned int _uiNotificationType;
    NSDate *_lastGenerationDate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool etaUpdatesWereReported; // @synthesize etaUpdatesWereReported=_etaUpdatesWereReported;
@property(nonatomic) unsigned int etaUpdatesAfterEventStart; // @synthesize etaUpdatesAfterEventStart=_etaUpdatesAfterEventStart;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)didShowUI:(unsigned int)arg1;
- (void)didStopHypothesizing;
- (void)didGenerateHypothesis;
- (void)didArriveWithExpectedArrivalTime:(id)arg1;
- (void)didStopMoving;
- (void)didStartMovingWithExpectedDepartureTime:(id)arg1;
- (void)didReroute;
- (void)dealloc;
- (id)init;

@end

