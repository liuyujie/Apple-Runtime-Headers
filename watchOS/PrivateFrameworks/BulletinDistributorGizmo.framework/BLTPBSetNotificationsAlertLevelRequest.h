//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSString;

@interface BLTPBSetNotificationsAlertLevelRequest : PBRequest <NSCopying>
{
    int _level;
    NSString *_sectionID;
    _Bool _mirror;
    struct {
        unsigned int level:1;
        unsigned int mirror:1;
    } _has;
}

@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
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
@property(nonatomic) _Bool hasMirror;
@property(readonly, nonatomic) _Bool hasSectionID;
- (int)StringAsLevel:(id)arg1;
- (id)levelAsString:(int)arg1;
@property(nonatomic) _Bool hasLevel;
@property(nonatomic) int level; // @synthesize level=_level;

@end
