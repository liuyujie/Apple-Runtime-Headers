//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface TVHKMediaEntityType : NSObject <NSCopying>
{
    unsigned long long _subtype;
    unsigned long long _mediaCategoryType;
    unsigned long long _mediaCollectionType;
    unsigned long long _mediaItemType;
}

+ (id)playlistMediaEntityType;
+ (id)mediaCollectionMediaEntityTypeWithMediaCollectionType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2;
+ (id)mediaItemMediaEntityTypeWithMediaItemType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2;
@property(nonatomic) unsigned long long mediaItemType; // @synthesize mediaItemType=_mediaItemType;
@property(nonatomic) unsigned long long mediaCollectionType; // @synthesize mediaCollectionType=_mediaCollectionType;
@property(nonatomic) unsigned long long mediaCategoryType; // @synthesize mediaCategoryType=_mediaCategoryType;
@property(nonatomic) unsigned long long subtype; // @synthesize subtype=_subtype;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringRepresentation;
- (id)initWithStringRepresentation:(id)arg1;
- (id)_init;

@end
