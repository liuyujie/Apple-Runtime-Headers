//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSString;

@interface NMSPodcastIdentifierSet : NSObject <NSCopying>
{
    NSNumber *_storeID;
    NSString *_feedURL;
}

@property(readonly, nonatomic) NSString *feedURL; // @synthesize feedURL=_feedURL;
@property(readonly, nonatomic) NSNumber *storeID; // @synthesize storeID=_storeID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToPodcastIdentifierSet:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithStoreID:(id)arg1 feedURL:(id)arg2;

@end
