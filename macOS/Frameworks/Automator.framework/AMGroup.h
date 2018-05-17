//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSImage, NSIndexPath, NSMutableArray, NSString;

@interface AMGroup : NSObject <NSCopying>
{
    NSImage *_smallIcon;
    NSImage *_largeIcon;
    NSString *_name;
    NSMutableArray *_assets;
    BOOL _useSmallIcon;
    BOOL _readOnly;
    BOOL _isExpanded;
    AMGroup *_parentGroup;
    NSMutableArray *_childGroups;
    NSArray *_assetSortDescriptors;
    NSString *_type;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)groupWithName:(id)arg1 smallIcon:(id)arg2 largeIcon:(id)arg3;
+ (id)groupWithName:(id)arg1;
@property(retain, nonatomic) NSArray *childGroups; // @synthesize childGroups=_childGroups;
@property(retain, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) NSArray *assetSortDescriptors; // @synthesize assetSortDescriptors=_assetSortDescriptors;
@property __weak AMGroup *_parentGroup; // @synthesize _parentGroup;
@property(getter=isExpanded, setter=setIsExpanded:) BOOL expanded; // @synthesize expanded=_isExpanded;
@property(getter=isReadOnly, setter=setReadOnly:) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property BOOL useSmallIcon; // @synthesize useSmallIcon=_useSmallIcon;
@property(retain) NSImage *largeIcon; // @synthesize largeIcon=_largeIcon;
@property(retain) NSImage *smallIcon; // @synthesize smallIcon=_smallIcon;
@property(copy) NSString *type; // @synthesize type=_type;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)localizedCaseInsensitiveCompareForVariableCategories:(id)arg1;
- (long long)localizedCaseInsensitiveCompareForActionCategories:(id)arg1;
- (id)description;
- (void)describeInto:(id)arg1 withDepth:(long long)arg2;
- (BOOL)containsAssetWithIdentifier:(id)arg1;
- (BOOL)containsAsset:(id)arg1;
- (void)removeAllAssets;
- (void)removeAsset:(id)arg1;
- (void)addAsset:(id)arg1;
- (void)insertAsset:(id)arg1 atIndex:(long long)arg2;
@property(readonly, nonatomic) NSArray *deepAssets;
@property(readonly, nonatomic) long long numberOfAssets;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) long long numberOfChildGroups;
- (void)removeChildGroup:(id)arg1;
- (void)addChildGroup:(id)arg1;
- (void)insertChildGroup:(id)arg1 atIndex:(long long)arg2;
- (id)firstChildGroupWithDisplayName:(id)arg1;
@property(readonly, nonatomic) NSIndexPath *indexPath;
- (unsigned long long)indexOfGroup:(id)arg1;
- (long long)depth;
@property(readonly, nonatomic) NSArray *ancestors;
@property(readonly, nonatomic) NSArray *lineage;
@property(retain, nonatomic) AMGroup *parentGroup;
@property(readonly, nonatomic, getter=isLeafGroup) BOOL leafGroup;
- (void)didChangeGroups;
- (void)willChangeGroups;
- (void)didChangeAssets;
- (void)willChangeAssets;
@property(readonly, nonatomic) NSImage *icon;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 smallIcon:(id)arg2 largeIcon:(id)arg3;
- (id)initWithName:(id)arg1;
- (id)init;

@end
