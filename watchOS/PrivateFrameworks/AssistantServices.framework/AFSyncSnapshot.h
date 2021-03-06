//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface AFSyncSnapshot : NSObject <NSSecureCoding>
{
    NSString *_anchor;
    NSString *_validity;
    int _count;
    NSString *_key;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) int count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *validity; // @synthesize validity=_validity;
@property(copy, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

