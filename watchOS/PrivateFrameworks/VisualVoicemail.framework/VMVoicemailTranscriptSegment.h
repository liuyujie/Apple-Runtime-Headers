//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface VMVoicemailTranscriptSegment : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_substring;
    float _confidence;
    unsigned int _confidenceRating;
    struct _NSRange _substringRange;
    double _duration;
    double _timestamp;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned int confidenceRating; // @synthesize confidenceRating=_confidenceRating;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) struct _NSRange substringRange; // @synthesize substringRange=_substringRange;
@property(readonly, copy, nonatomic) NSString *substring; // @synthesize substring=_substring;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTranscriptionSegment:(id)arg1 confidenceThreshold:(float)arg2;
- (id)init;

@end
