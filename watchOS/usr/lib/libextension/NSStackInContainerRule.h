//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSLayoutRule.h"

@class NSArray, NSLayoutRect, NSString;

@interface NSStackInContainerRule : NSObject <NSLayoutRule>
{
    NSArray *_stackedRects;
    NSLayoutRect *_containingRect;
    float _spacing;
    int _orientation;
}

+ (id)verticalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(float)arg3;
+ (id)horizontalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(float)arg3;
+ (id)stackWithOrientation:(int)arg1 stackedRects:(id)arg2 inContainer:(id)arg3 spacing:(float)arg4;
@property(readonly, copy) NSLayoutRect *containingRect; // @synthesize containingRect=_containingRect;
@property(readonly) float spacing; // @synthesize spacing=_spacing;
@property(readonly) int orientation; // @synthesize orientation=_orientation;
@property(readonly, copy) NSArray *stackedRects; // @synthesize stackedRects=_stackedRects;
@property(readonly, copy) NSString *ruleDescription;
@property(readonly, copy) NSString *description;
- (id)makeChildRules;
@property(readonly, copy) NSString *identifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithOrientation:(int)arg1 stackedRects:(id)arg2 containingRect:(id)arg3 spacing:(float)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

