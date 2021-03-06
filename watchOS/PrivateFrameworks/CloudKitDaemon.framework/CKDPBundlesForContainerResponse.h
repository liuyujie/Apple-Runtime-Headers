//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPBundlesForContainerResponse : PBCodable <NSCopying>
{
    NSMutableArray *_bundleIDs;
}

+ (Class)bundleIDType;
@property(retain, nonatomic) NSMutableArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)bundleIDAtIndex:(unsigned int)arg1;
- (unsigned int)bundleIDsCount;
- (void)addBundleID:(id)arg1;
- (void)clearBundleIDs;

@end

