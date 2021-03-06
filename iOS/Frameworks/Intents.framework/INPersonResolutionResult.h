//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

#import "INPersonResolutionResultExport.h"

@class NSString;

@interface INPersonResolutionResult : INIntentResolutionResult <INPersonResolutionResultExport>
{
}

+ (id)confirmationRequiredWithPersonToConfirm:(id)arg1;
+ (id)disambiguationWithPeopleToDisambiguate:(id)arg1;
+ (id)successWithResolvedPerson:(id)arg1;
+ (id)unsupportedWithReason:(unsigned long long)arg1 alternativePeople:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

