//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString, TIProactiveTrigger, _ICPredictedItem;

@interface TIZephyrCandidate : TIKeyboardCandidateSingle
{
    _Bool _isFromPhraseDictionary;
    _Bool _isFromTextChecker;
    _Bool _isSecureContentCandidate;
    unsigned int _wordOriginFeedbackID;
    unsigned int _usageTrackingMask;
    TIProactiveTrigger *_proactiveTrigger;
    NSString *_fromBundleId;
    unsigned int _ageForConnectionsMetrics;
    _ICPredictedItem *_proactivePredictedItem;
    NSString *_label;
}

+ (int)type;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) _ICPredictedItem *proactivePredictedItem; // @synthesize proactivePredictedItem=_proactivePredictedItem;
@property(nonatomic) unsigned int ageForConnectionsMetrics; // @synthesize ageForConnectionsMetrics=_ageForConnectionsMetrics;
@property(copy, nonatomic) NSString *fromBundleId; // @synthesize fromBundleId=_fromBundleId;
- (id)proactiveTrigger;
- (_Bool)isSecureContentCandidate;
@property(nonatomic) _Bool isFromTextChecker; // @synthesize isFromTextChecker=_isFromTextChecker;
@property(nonatomic) _Bool isFromPhraseDictionary; // @synthesize isFromPhraseDictionary=_isFromPhraseDictionary;
- (unsigned int)usageTrackingMask;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isAutocorrection;
- (unsigned int)wordOriginFeedbackID;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned int)arg3 usageTrackingMask:(unsigned int)arg4 secureContentCandidate:(_Bool)arg5 proactiveTrigger:(id)arg6 proactivePredictedItem:(id)arg7;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned int)arg3 usageTrackingMask:(unsigned int)arg4;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned int)arg3;
- (void)dealloc;

@end
