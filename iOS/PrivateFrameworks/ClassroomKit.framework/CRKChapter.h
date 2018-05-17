//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface CRKChapter : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSArray *_subchapters;
    NSURL *_webURL;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSArray *subchapters; // @synthesize subchapters=_subchapters;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *JSONRepresentation;
- (id)description;
- (id)init;

@end
