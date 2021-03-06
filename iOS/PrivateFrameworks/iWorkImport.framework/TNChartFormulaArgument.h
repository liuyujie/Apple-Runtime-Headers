//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSCECellTractRef;

__attribute__((visibility("hidden")))
@interface TNChartFormulaArgument : NSObject
{
    int _type;
    void *_data;
}

@property(readonly) int type; // @synthesize type=_type;
- (id)description;
- (UUIDData_5fbc143e)tableUID:(id)arg1;
@property(readonly) struct TSCEValue *staticValue;
@property(readonly) struct TSCECategoryRef categoryReference;
@property(readonly) TSCECellTractRef *tractReference;
@property(readonly) struct TSCERangeRef rangeReference;
@property(readonly) struct TSCECellRef cellReference;
@property(readonly) _Bool isBadRef;
@property(readonly) _Bool isReference;
@property(readonly) _Bool isGeometricReference;
@property(readonly) _Bool isStaticValue;
@property(readonly) _Bool isCategoryReference;
@property(readonly) _Bool isTractReference;
@property(readonly) _Bool isRangeReference;
@property(readonly) _Bool isCellReference;
- (void)dealloc;
- (id)initWithBadRef;
- (id)initWithStaticValue:(const struct TSCEValue *)arg1;
- (id)initWithCategoryReference:(struct TSCECategoryRef)arg1;
- (id)initWithTractReference:(id)arg1;
- (id)initWithRangeReference:(struct TSCERangeRef)arg1;
- (id)initWithCellReference:(struct TSCECellRef)arg1;

@end

