//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

@interface INPaymentStatusResolutionResult : INIntentResolutionResult
{
}

+ (id)confirmationRequiredWithValueToConfirm:(int)arg1;
+ (id)confirmationRequiredWithPaymentStatusToConfirm:(int)arg1;
+ (id)successWithResolvedValue:(int)arg1;
+ (id)successWithResolvedPaymentStatus:(int)arg1;

@end

