//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CarouselUIServices/CUISAlertSuppressionPolicy.h>

@class NSArray;

@interface CUISAssertionAlertSuppressionBlacklistPolicy : CUISAlertSuppressionPolicy
{
    NSArray *_blacklist;
}

@property(retain, nonatomic) NSArray *blacklist; // @synthesize blacklist=_blacklist;
- (void).cxx_destruct;
- (id)description;
- (_Bool)hasSuppressionRuleForAlertItem:(id)arg1;
- (unsigned int)suppressionRuleForAlertItem:(id)arg1;
- (id)initWithSuppressedServices:(id)arg1;
- (id)init;

@end

