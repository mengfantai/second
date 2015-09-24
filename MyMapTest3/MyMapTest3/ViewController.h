//
//  ViewController.h
//  MyMapTest3
//
//  Created by 杨 国俊 on 15/9/17.
//  Copyright (c) 2015年 sdzy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
@interface ViewController : UIViewController<MKMapViewDelegate,CLLocationManagerDelegate>
@property(strong,nonatomic) MKMapView *mapView;
@property(strong,nonatomic) CLLocationManager *locationManager;

@property(strong,nonatomic) CLPlacemark *placemark;
@property(strong,nonatomic) CLLocation *currentLocation;

@end

