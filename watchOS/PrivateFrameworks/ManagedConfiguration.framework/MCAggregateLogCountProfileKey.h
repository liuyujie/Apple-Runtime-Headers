//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ManagedConfiguration/MCAggregateLogKey.h>

@interface MCAggregateLogCountProfileKey : MCAggregateLogKey
{
    unsigned int _type;
}

+ (void)updateProfileCounts;
+ (id)_type:(unsigned int)arg1;
+ (id)encrypted;
+ (id)signedByApple;
+ (id)signed;
+ (id)carrier;
+ (id)all;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (unsigned int)value;
- (id)name;

@end

