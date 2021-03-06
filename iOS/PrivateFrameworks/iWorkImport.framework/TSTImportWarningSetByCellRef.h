//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSTImportWarningSetByCellRef : NSObject
{
    struct unordered_map<TSCECellRef, TSTImportWarningSet *, std::__1::hash<TSCECellRef>, std::__1::equal_to<TSCECellRef>, std::__1::allocator<std::__1::pair<const TSCECellRef, TSTImportWarningSet *>>> _warningSetForCoordinate;
    vector_4115f7f8 _coordinates;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchive:(struct ImportWarningSetByCellRefArchive *)arg1;
- (id)initFromArchive:(const struct ImportWarningSetByCellRefArchive *)arg1;
- (id)warningSetAtCellRef:(const struct TSCECellRef *)arg1;
- (struct TSCECellRef)cellRefForIndex:(unsigned long long)arg1;
- (void)addWarning:(id)arg1 atCellRef:(const struct TSCECellRef *)arg2;
@property(readonly) unsigned long long count;

@end

