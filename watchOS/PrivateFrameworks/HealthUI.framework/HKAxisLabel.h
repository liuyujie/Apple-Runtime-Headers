//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HKAxisLabel : NSObject
{
    NSString *_text;
    id _location;
    int _labelType;
}

@property(nonatomic) int labelType; // @synthesize labelType=_labelType;
@property(retain, nonatomic) id location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end

