//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface INFSentenceContext : NSObject
{
    NSNumber *_number;
    unsigned long long _gender;
}

+ (id)sentenceContext;
@property unsigned long long gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSNumber *number; // @synthesize number=_number;
- (void).cxx_destruct;
- (id)combinedWithContext:(id)arg1;

@end

