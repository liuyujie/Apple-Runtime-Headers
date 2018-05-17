//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSDictionary, NSString;

@interface SBSAnalyticsState : NSObject <BSDescriptionProviding>
{
    double _timestamp;
    NSDictionary *_payload;
}

+ (id)withTimestamp:(double)arg1 payload:(id)arg2;
+ (id)withTimestamp:(double)arg1;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)coreAnalyticsRepresentation;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithTimestamp:(double)arg1 payload:(id)arg2;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
