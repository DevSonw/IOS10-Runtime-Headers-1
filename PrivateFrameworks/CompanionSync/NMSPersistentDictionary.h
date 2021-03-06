//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/NSLocking-Protocol.h>

@class NSString, _SYSharedServiceDB;
@protocol OS_dispatch_semaphore;

@interface NMSPersistentDictionary : NSObject <NSLocking>
{
    Class _objectClass;
    NSString *_path;
    struct __CFString *_loggingFacility;
    NSObject<OS_dispatch_semaphore> *_lock;
    _SYSharedServiceDB *_sharedDB;
    struct sqlite3 *_db;
    struct sqlite3_stmt *_fetch;
    struct sqlite3_stmt *_insert;
    struct sqlite3_stmt *_reset;
    struct sqlite3_stmt *_remove;
    struct sqlite3_stmt *_removeAll;
    struct sqlite3_stmt *_byDate;
    struct sqlite3_stmt *_byEnqueueDate;
}

- (void).cxx_destruct;
- (void)enumerateObjectsSortedByEnqueueDate:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsSortedByExpirationDate:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (void)resetObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 expires:(id)arg3;
- (id)_dataFromObject:(id)arg1;
- (id)_objectFromData:(id)arg1;
- (void)_prepareStatements;
- (void)_ensureDBSchema;
- (void)_openDBForceRecreate:(_Bool)arg1;
- (unsigned long long)_checkSchemaVersion;
- (void)_withDB:(CDUnknownBlockType)arg1;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)initWithSharedDBForService:(id)arg1 objectClass:(Class)arg2;
- (id)initWithPath:(id)arg1 objectClass:(Class)arg2 loggingFacility:(struct __CFString *)arg3;
- (id)init;

@end

