//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying>
{
    _Bool _compilation;
    NSData *_groupingKey;
    NSString *_feedURL;
    int _seasonNumber;
    long long _albumArtistPersistentID;
}

@property(readonly, nonatomic) _Bool compilation; // @synthesize compilation=_compilation;
@property(readonly, nonatomic) int seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(readonly, nonatomic) NSString *feedURL; // @synthesize feedURL=_feedURL;
@property(readonly, nonatomic) NSData *groupingKey; // @synthesize groupingKey=_groupingKey;
@property(readonly, nonatomic) long long albumArtistPersistentID; // @synthesize albumArtistPersistentID=_albumArtistPersistentID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *keyValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithAlbumArtistPersistentID:(long long)arg1 groupingKey:(id)arg2 feedURL:(id)arg3 seasonNumber:(int)arg4 compilation:(_Bool)arg5;

@end
