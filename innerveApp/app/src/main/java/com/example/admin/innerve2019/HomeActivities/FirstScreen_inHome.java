package com.example.admin.innerve2019.HomeActivities;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.text.method.ScrollingMovementMethod;
import android.widget.TextView;

import com.example.admin.innerve2019.R;

/**
 * Created by HIman$hu on 3/9/2017.
 */

public class FirstScreen_inHome extends AppCompatActivity {

    TextView textView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.first_screen_in_home);

//        textView = (TextView) findViewById(R.id.id_tv);
        textView.setMovementMethod(new ScrollingMovementMethod());
    }
}
