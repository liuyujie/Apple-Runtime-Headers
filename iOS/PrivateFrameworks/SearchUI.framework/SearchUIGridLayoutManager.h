//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, TLKGridLayoutManager;

@interface SearchUIGridLayoutManager : NSObject
{
    _Bool _isCompactTable;
    TLKGridLayoutManager *_gridManager;
    NSMapTable *_tableMapping;
}

+ (id)itemsForDataItems:(id)arg1;
+ (id)alignmentsForSFHeaderRow:(id)arg1;
+ (_Bool)shouldHideViewForSection:(id)arg1;
@property(retain) NSMapTable *tableMapping; // @synthesize tableMapping=_tableMapping;
@property _Bool isCompactTable; // @synthesize isCompactTable=_isCompactTable;
@property(retain) TLKGridLayoutManager *gridManager; // @synthesize gridManager=_gridManager;
- (void).cxx_destruct;
- (id)tableRowForTableRowCardSection:(id)arg1;
- (_Bool)computeCompactTableForSections:(id)arg1;
- (id)initWithHeaderSection:(id)arg1 dataSections:(id)arg2;

@end
