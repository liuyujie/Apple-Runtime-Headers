//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID;

@interface HFWallpaperHomeKitObjectKey : NSObject
{
    unsigned int _type;
    NSUUID *_uniqueIdentifier;
}

+ (id)stringFromHomeKitObjectType:(unsigned int)arg1;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned int)arg1 uniqueIdentifier:(id)arg2;
- (id)initWithHomeKitObject:(id)arg1;
- (id)init;

@end

