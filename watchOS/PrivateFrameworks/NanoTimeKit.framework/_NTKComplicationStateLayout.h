//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NTKComplicationLayoutRule;

@interface _NTKComplicationStateLayout : NSObject
{
    NSMutableDictionary *_overrideRules;
    NTKComplicationLayoutRule *_defaultRule;
}

@property(retain, nonatomic) NTKComplicationLayoutRule *defaultRule; // @synthesize defaultRule=_defaultRule;
- (id)ruleForLayoutOverride:(int)arg1;
- (void)setRule:(id)arg1 forLayoutOverride:(int)arg2;
- (void)dealloc;

@end
