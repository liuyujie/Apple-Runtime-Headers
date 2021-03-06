//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import "TSPCopying.h"

@class NSObject<TSDContainerInfo><TSWPStorageParent>;

__attribute__((visibility("hidden")))
@interface TSTTableDataList : TSPObject <TSPCopying>
{
    struct unordered_map<unsigned int, TSTTableDataObject *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, TSTTableDataObject *>>> _data;
    struct unordered_map<TSTTableDataObject *, unsigned int, TSTTableDataObjectHash, TSTTableDataObjectEqual, std::__1::allocator<std::__1::pair<TSTTableDataObject *const, unsigned int>>> _dataToKeyDict;
    _Bool _isNewForBraveNewCell;
    int _listType;
    unsigned int _nextID;
    NSObject<TSDContainerInfo><TSWPStorageParent> *_richTextParentInfo;
}

+ (Class)classForUnarchiver:(id)arg1;
@property(nonatomic) unsigned int nextID; // @synthesize nextID=_nextID;
@property(nonatomic) _Bool isNewForBraveNewCell; // @synthesize isNewForBraveNewCell=_isNewForBraveNewCell;
@property(nonatomic) int listType; // @synthesize listType=_listType;
@property(nonatomic) NSObject<TSDContainerInfo><TSWPStorageParent> *richTextParentInfo; // @synthesize richTextParentInfo=_richTextParentInfo;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithContext:(id)arg1;
- (id)listTypeString;
- (void)dropReferenceForKey:(unsigned int)arg1;
- (void)p_addReferencesForKey:(unsigned int)arg1 fromObject:(id)arg2;
- (void)takeReferenceForKey:(unsigned int)arg1;
- (unsigned int)refCountForKey:(unsigned int)arg1;
- (unsigned long long)count;
- (void)replaceConditionalStyleSetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)replaceFormulasUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDataObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectForKey:(unsigned int)arg1;
- (void)removeObjectForKey:(unsigned int)arg1;
- (unsigned int)setObject:(id)arg1 atSuggestedKey:(unsigned int)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (id)initWithType:(int)arg1 context:(id)arg2;
- (void)p_setupWithType:(int)arg1 nextKeyID:(unsigned int)arg2;
- (_Bool)useReverseMap;
- (id)styleForKey:(unsigned int)arg1;
- (id)stringForKey:(unsigned int)arg1;
- (id)richTextForKey:(unsigned int)arg1;
- (id)multipleChoiceListFormatForKey:(unsigned int)arg1;
- (id)importWarningSetForKey:(unsigned int)arg1;
- (id)formulaErrorForKey:(unsigned int)arg1;
- (id)controlCellSpecForKey:(unsigned int)arg1;
- (id)formulaForKey:(unsigned int)arg1;
- (id)conditionalStyleSetForKey:(unsigned int)arg1;
- (id)commentStorageForKey:(unsigned int)arg1;
- (id)cellFormatForKey:(unsigned int)arg1;
- (unsigned int)addStyle:(id)arg1 atSuggestedKey:(unsigned int)arg2;
- (unsigned int)addString:(id)arg1 atSuggestedKey:(unsigned int)arg2;
- (unsigned int)addRichText:(id)arg1 atSuggestedKey:(unsigned int)arg2;
- (unsigned int)addMultipleChoiceListFormat:(id)arg1 atSuggestedKey:(unsigned int)arg2;
- (unsigned int)addImportWarningSet:(id)arg1 atSuggestedKey:(unsigned int)arg2;
- (unsigned int)addFormulaError:(id)arg1 atSuggestedKey:(unsigned int)arg2;
- (unsigned int)addControlCellSpec:(id)arg1 atSuggestedKey:(unsigned int)arg2;
- (unsigned int)addFormula:(id)arg1 atSuggestedKey:(unsigned int)arg2;
- (unsigned int)addConditionalStyleSet:(id)arg1 atSuggestedKey:(unsigned int)arg2;
- (unsigned int)addCommentStorage:(id)arg1 atSuggestedKey:(unsigned int)arg2;
- (unsigned int)addCellFormat:(id)arg1 atSuggestedKey:(unsigned int)arg2;
- (_Bool)containsFormulas;
- (_Bool)containsControlCellSpecs;
- (id)allRichTextStorages;
- (id)getRefCountsFromDataList;
- (id)reassignCustomFormatUIDForPaste;
- (void)upgradeConditionalStylesToLinkedRefWithTableUID:(const UUIDData_5fbc143e *)arg1;
- (void)upgradeCellFormatsU2_0;
- (_Bool)hasDuplicatedElements;

@end

