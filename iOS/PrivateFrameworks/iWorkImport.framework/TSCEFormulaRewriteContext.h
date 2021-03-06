//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSCECalculationEngine, TSCERewriteTableUIDInfo;

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewriteContext : NSObject
{
    struct vector<TSCEFormulaRewriteContextRecord, std::__1::allocator<TSCEFormulaRewriteContextRecord>> _contextStack;
    TSCECalculationEngine *_calcEngine;
    TSCERewriteTableUIDInfo *_tableUIDHistory;
}

@property(retain, nonatomic) TSCERewriteTableUIDInfo *tableUIDHistory; // @synthesize tableUIDHistory=_tableUIDHistory;
@property(retain, nonatomic) TSCECalculationEngine *calcEngine; // @synthesize calcEngine=_calcEngine;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resetOutputs;
@property(nonatomic) _Bool isRangeRef;
@property(nonatomic) _Bool containsBadRef;
@property(nonatomic) _Bool useOnlyActiveTract;
@property(nonatomic) _Bool restoreBadRefs;
@property(nonatomic) _Bool hostCellOverridesTableID;
@property(nonatomic) _Bool tableSizeGrowing;
@property(nonatomic) _Bool preserveHostCell;
@property(nonatomic) CDStruct_1ef3fb1f fromOffset;
@property(nonatomic) UUIDData_5fbc143e resolverTableUID;
@property(nonatomic) struct TSUCellCoord containingCellCoord;
@property(readonly, nonatomic) UUIDData_5fbc143e containingTableUID;
@property(nonatomic) struct TSCEFormulaContainingCell containingCell;
- (id)initWithCalcEngine:(id)arg1 containingCell:(const struct TSCEFormulaContainingCell *)arg2;
- (id)initWithCalcEngine:(id)arg1 containingCellRef:(const struct TSCECellRef *)arg2;

@end

