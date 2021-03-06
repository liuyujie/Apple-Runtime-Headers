//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSISVariableDelegate.h"
#import "NSLayoutItem.h"

@class NSISVariable, NSString;

@interface NSAbstractLayoutGuide : NSObject <NSLayoutItem, NSISVariableDelegate, NSCoding>
{
    id <NSLayoutItem> _concreteLayoutGuide;
    id <NSLayoutItem> _owningView;
    NSString *_identifier;
    NSISVariable *_minYVariable;
    NSISVariable *_minXVariable;
    NSISVariable *_widthVariable;
    NSISVariable *_heightVariable;
    struct CGRect _layoutFrame;
}

@property(readonly) NSISVariable *heightVariable; // @synthesize heightVariable=_heightVariable;
@property(readonly) NSISVariable *widthVariable; // @synthesize widthVariable=_widthVariable;
@property(readonly) NSISVariable *minYVariable; // @synthesize minYVariable=_minYVariable;
@property(readonly) NSISVariable *minXVariable; // @synthesize minXVariable=_minXVariable;
@property(readonly) struct CGRect layoutFrame; // @synthesize layoutFrame=_layoutFrame;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (int)nsis_orientationHintForVariable:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (id)nsli_installedConstraints;
- (double)nsli_marginOffsetForAttribute:(long long)arg1;
- (BOOL)nsli_removeConstraint:(id)arg1;
- (void)nsli_addConstraint:(id)arg1;
- (BOOL)nsli_isFlipped;
- (unsigned long long)nsli_autoresizingMask;
- (BOOL)nsli_descriptionIncludesPointer;
- (id)nsli_description;
- (BOOL)nsli_resolvedValue:(double *)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id *)arg4;
- (BOOL)_isDescendantOf:(id)arg1;
- (BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 container:(id)arg4;
- (BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 forConstraint:(id)arg4;
- (id)nsli_superitem;
- (struct CGSize)nsli_convertSizeFromEngineSpace:(struct CGSize)arg1;
- (struct CGSize)nsli_convertSizeToEngineSpace:(struct CGSize)arg1;
- (id)nsli_layoutEngine;
- (void)_snipReferencingConstraints;
@property(readonly) struct CGRect frame;
@property id <NSLayoutItem> owningView;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithConcreteLayoutGuide:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(setter=nsli_setPiercingToken:) unsigned long long nsli_piercingToken;
@property(readonly) Class superclass;

@end

