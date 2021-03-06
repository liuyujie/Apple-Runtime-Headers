//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class IDSCKServerChangeToken, NSArray;

@interface IDSCKFetchRecordZoneChangesOptions : NSObject <NSSecureCoding, NSCopying>
{
    IDSCKServerChangeToken *_previousServerChangeToken;
    unsigned int _resultsLimit;
    NSArray *_desiredKeys;
}

+ (id)alloc;
+ (Class)__class;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) unsigned int resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(copy, nonatomic) IDSCKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
- (void).cxx_destruct;

@end

