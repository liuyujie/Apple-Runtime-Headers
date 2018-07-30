//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookCore/ABAbstractAccountConfiguration.h>

@class ABAccountPersistence;

@interface ABAccountPersistenceAccountConfiguration : ABAbstractAccountConfiguration
{
    ABAccountPersistence *_persistence;
}

- (BOOL)save:(id *)arg1;
- (id)allPersistentKeysAndValues;
- (id)primitiveValueForKey:(id)arg1;
- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (id)debugDescription;
- (id)description;
- (void)dealloc;
- (id)initWithPersistence:(id)arg1;
- (id)initWithAccount:(id)arg1 persistence:(id)arg2;

@end
