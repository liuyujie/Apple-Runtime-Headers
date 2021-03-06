//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableDictionary, VSKeychainEditingContext, VSKeychainItemKind;

__attribute__((visibility("hidden")))
@interface VSKeychainItem : NSObject
{
    _Bool _inserted;
    _Bool _updated;
    _Bool _deleted;
    _Bool _hasFaultForData;
    VSKeychainEditingContext *_editingContext;
    VSKeychainItemKind *_itemKind;
    NSMutableDictionary *_committedValues;
    NSMutableDictionary *_primitiveValues;
}

@property(nonatomic) _Bool hasFaultForData; // @synthesize hasFaultForData=_hasFaultForData;
@property(retain, nonatomic) NSMutableDictionary *primitiveValues; // @synthesize primitiveValues=_primitiveValues;
@property(retain, nonatomic) NSMutableDictionary *committedValues; // @synthesize committedValues=_committedValues;
@property(nonatomic, getter=isDeleted) _Bool deleted; // @synthesize deleted=_deleted;
@property(nonatomic, getter=isUpdated) _Bool updated; // @synthesize updated=_updated;
@property(nonatomic, getter=isInserted) _Bool inserted; // @synthesize inserted=_inserted;
@property(readonly, copy, nonatomic) VSKeychainItemKind *itemKind; // @synthesize itemKind=_itemKind;
@property(nonatomic) __weak VSKeychainEditingContext *editingContext; // @synthesize editingContext=_editingContext;
- (void).cxx_destruct;
- (id)description;
@property(copy, nonatomic) NSData *data;
- (void)didAccessValueForKey:(id)arg1;
- (void)willAccessValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (id)changedValues;
- (id)committedValueForKey:(id)arg1;
- (id)committedValuesForKeys:(id)arg1;
- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveValueForKey:(id)arg1;
@property(readonly, nonatomic) _Bool hasPersistentChangedValues;
@property(readonly, nonatomic) _Bool hasChanges;
- (void)_setCommittedValues:(id)arg1 registeringUndo:(_Bool)arg2;
- (id)initWithItemKind:(id)arg1 insertIntoEditingContext:(id)arg2;
- (id)init;

@end

