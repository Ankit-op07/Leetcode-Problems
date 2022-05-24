int x=-(nums[i]+nums[j]);
if(st.find(x)!=st.end()){
vector<int>v(3);
v[0]=nums[i];
v[1]=nums[j];
v[2]=x;
sort(v.begin(),v.end());            //sorting
if(temp.find(v)==temp.end()){
temp.insert(v);
}
}else{
st.insert(nums[j]);
}
}
st.clear();
}
for(auto k:temp){
res.push_back(k);
}
return res;
}
*/
```