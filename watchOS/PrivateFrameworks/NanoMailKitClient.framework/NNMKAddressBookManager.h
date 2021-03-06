//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock;

@interface NNMKAddressBookManager : NSObject
{
    void *_addressBook;
    NSLock *_addressBookLock;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSLock *addressBookLock; // @synthesize addressBookLock=_addressBookLock;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
- (void).cxx_destruct;
- (void)_applicationResumed:(id)arg1;
- (void)_handleAddressBookChangeNotification;
- (void)unlockAddressBook;
- (void *)lockAddressBook;
- (void)dealloc;
- (id)init;

@end

