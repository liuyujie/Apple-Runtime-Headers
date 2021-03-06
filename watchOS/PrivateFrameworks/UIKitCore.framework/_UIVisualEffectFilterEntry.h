//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UIVisualEffectDiffable.h"

@class CAFilter, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectFilterEntry : NSObject <_UIVisualEffectDiffable>
{
    CAFilter *_filter;
    NSDictionary *_requestedValues;
    NSDictionary *_identityValues;
    float _requestedScaleHint;
    float _identityScaleHint;
}

@property(nonatomic) float identityScaleHint; // @synthesize identityScaleHint=_identityScaleHint;
@property(nonatomic) float requestedScaleHint; // @synthesize requestedScaleHint=_requestedScaleHint;
@property(copy, nonatomic) NSDictionary *identityValues; // @synthesize identityValues=_identityValues;
@property(copy, nonatomic) NSDictionary *requestedValues; // @synthesize requestedValues=_requestedValues;
@property(retain, nonatomic) CAFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)copyForTransitionOut;
- (id)copyForTransitionToEffect:(id)arg1;
- (_Bool)canTransitionToEffect:(id)arg1;
- (_Bool)isSameTypeOfEffect:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)scaleHintAsRequested:(_Bool)arg1;
- (id)valueAsRequested:(_Bool)arg1;
- (id)initWithFilter:(id)arg1 requestedValues:(id)arg2 identityValues:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

