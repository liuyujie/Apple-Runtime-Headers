//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSSet;

@interface IMAPMessageDetails : NSObject <NSCopying>
{
    unsigned int _uid;
    long long _messageFlags;
    NSSet *_gmailLabels;
    long long _libraryID;
}

+ (id)searchDetails:(id)arg1 forUid:(unsigned int)arg2 skippingUid:(unsigned int)arg3;
@property(nonatomic) long long libraryID; // @synthesize libraryID=_libraryID;
@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSSet *gmailLabels; // @synthesize gmailLabels=_gmailLabels;
@property(nonatomic) long long messageFlags; // @synthesize messageFlags=_messageFlags;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

