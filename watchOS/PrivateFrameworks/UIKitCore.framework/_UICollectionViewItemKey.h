//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionViewItemKey : NSObject <NSCopying>
{
    NSIndexPath *_indexPath;
    NSString *_identifier;
    _Bool _isClone;
    unsigned int _type;
}

+ (id)collectionItemKeyForLayoutAttributes:(id)arg1;
+ (id)collectionItemKeyForDecorationViewOfKind:(id)arg1 andIndexPath:(id)arg2;
+ (id)collectionItemKeyForSupplementaryViewOfKind:(id)arg1 andIndexPath:(id)arg2;
+ (id)collectionItemKeyForCellWithIndexPath:(id)arg1;
@property(readonly, nonatomic) _Bool isClone; // @synthesize isClone=_isClone;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyAsClone:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithType:(unsigned int)arg1 indexPath:(id)arg2 identifier:(id)arg3 clone:(_Bool)arg4;
- (id)initWithType:(unsigned int)arg1 indexPath:(id)arg2 identifier:(id)arg3;

@end

