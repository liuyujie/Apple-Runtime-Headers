//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SGTABPerson : NSObject
{
    NSString *uniqueId;
    NSURL *url;
}

+ (id)personWithPerson:(id)arg1;
@property(readonly) NSString *uniqueId; // @synthesize uniqueId;
- (void).cxx_destruct;
@property(readonly, copy) NSURL *URLToPerson;
- (id)personWithAddressBook:(id)arg1;
- (id)initWithPerson:(id)arg1;
- (id)initWithUniqueId:(id)arg1;

@end

