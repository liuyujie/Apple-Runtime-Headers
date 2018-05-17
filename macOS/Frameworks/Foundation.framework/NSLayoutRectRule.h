//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSLayoutRule.h"

@class NSLayoutRect, NSString;

@interface NSLayoutRectRule : NSObject <NSLayoutRule>
{
    NSLayoutRect *_firstLayoutRect;
    NSLayoutRect *_secondLayoutRect;
    long long _relation;
}

@property long long relation; // @synthesize relation=_relation;
@property(readonly, copy) NSLayoutRect *secondLayoutRect; // @synthesize secondLayoutRect=_secondLayoutRect;
@property(readonly, copy) NSLayoutRect *firstLayoutRect; // @synthesize firstLayoutRect=_firstLayoutRect;
@property(readonly, copy) NSString *ruleDescription;
@property(readonly, copy) NSString *description;
- (id)makeChildRules;
@property(readonly, copy) NSString *identifier;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFirstLayoutRect:(id)arg1 secondLayoutRect:(id)arg2 relation:(long long)arg3;
- (id)initWithFirstLayoutRect:(id)arg1 secondLayoutRect:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
